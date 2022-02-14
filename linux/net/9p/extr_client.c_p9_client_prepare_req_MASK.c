
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_4__ {int tag; } ;
struct p9_req_t {TYPE_1__ tc; } ;
struct p9_client {scalar_t__ status; int proto_version; } ;
typedef int int8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct p9_req_t* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct p9_req_t*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,struct p9_client*,int ) ;
 int FUNC_3 (struct p9_req_t*) ;
 struct p9_req_t* FUNC_4 (struct p9_client*,int ,int) ;
 int FUNC_5 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_6 (struct p9_client*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,char const*,int ) ;
 int FUNC_9 (struct p9_client*,int ,int ) ;

__attribute__((used)) static struct p9_req_t *FUNC_10(struct p9_client *VAR_5,
           int8_t VAR_6, int VAR_7,
           const char *VAR_8, va_list VAR_9)
{
 int VAR_10;
 struct p9_req_t *VAR_11;

 FUNC_2(VAR_3, "client %p op %d\n", VAR_5, VAR_6);


 if (VAR_5->status == VAR_1)
  return FUNC_0(-VAR_2);


 if ((VAR_5->status == VAR_0) && (VAR_6 != VAR_4))
  return FUNC_0(-VAR_2);

 VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_7);
 if (FUNC_1(VAR_11))
  return VAR_11;


 FUNC_7(&VAR_11->tc, VAR_11->tc.tag, VAR_6);
 VAR_10 = FUNC_8(&VAR_11->tc, VAR_5->proto_version, VAR_8, VAR_9);
 if (VAR_10)
  goto reterr;
 FUNC_6(VAR_5, &VAR_11->tc);
 FUNC_9(VAR_5, VAR_6, VAR_11->tc.tag);
 return VAR_11;
reterr:
 FUNC_5(VAR_5, VAR_11);

 FUNC_3(VAR_11);
 return FUNC_0(VAR_10);
}
