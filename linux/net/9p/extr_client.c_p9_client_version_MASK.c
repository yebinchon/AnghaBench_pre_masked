
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {int rc; } ;
struct p9_client {int msize; int proto_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct p9_req_t*) ;
 int FUNC_2 (char*) ;
 struct p9_req_t* FUNC_3 (struct p9_client*,int ,char*,int,char*) ;
 int FUNC_4 (int ,char*,...) ;



 int FUNC_5 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_6 (int *,int,char*,int*,char**) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (struct p9_client*,int *) ;

__attribute__((used)) static int FUNC_9(struct p9_client *VAR_5)
{
 int VAR_6 = 0;
 struct p9_req_t *VAR_7;
 char *VAR_8 = ((void*)0);
 int VAR_9;

 FUNC_4(VAR_2, ">>> TVERSION msize %d protocol %d\n",
   VAR_5->msize, VAR_5->proto_version);

 switch (VAR_5->proto_version) {
 case 130:
  VAR_7 = FUNC_3(VAR_5, VAR_4, "ds",
     VAR_5->msize, "9P2000.L");
  break;
 case 129:
  VAR_7 = FUNC_3(VAR_5, VAR_4, "ds",
     VAR_5->msize, "9P2000.u");
  break;
 case 128:
  VAR_7 = FUNC_3(VAR_5, VAR_4, "ds",
     VAR_5->msize, "9P2000");
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_6 = FUNC_6(&VAR_7->rc, VAR_5->proto_version, "ds", &VAR_9, &VAR_8);
 if (VAR_6) {
  FUNC_4(VAR_2, "version error %d\n", VAR_6);
  FUNC_8(VAR_5, &VAR_7->rc);
  goto error;
 }

 FUNC_4(VAR_2, "<<< RVERSION msize %d %s\n", VAR_9, VAR_8);
 if (!FUNC_7(VAR_8, "9P2000.L", 8))
  VAR_5->proto_version = 130;
 else if (!FUNC_7(VAR_8, "9P2000.u", 8))
  VAR_5->proto_version = 129;
 else if (!FUNC_7(VAR_8, "9P2000", 6))
  VAR_5->proto_version = 128;
 else {
  FUNC_4(VAR_3,
    "server returned an unknown version: %s\n", VAR_8);
  VAR_6 = -VAR_1;
  goto error;
 }

 if (VAR_9 < 4096) {
  FUNC_4(VAR_3,
    "server returned a msize < 4096: %d\n", VAR_9);
  VAR_6 = -VAR_1;
  goto error;
 }
 if (VAR_9 < VAR_5->msize)
  VAR_5->msize = VAR_9;

error:
 FUNC_2(VAR_8);
 FUNC_5(VAR_5, VAR_7);

 return VAR_6;
}
