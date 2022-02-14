
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fcall {int size; int capacity; char* sdata; int offset; } ;
struct p9_dirent {int d_name; int d_type; int d_off; int qid; } ;
struct p9_client {int proto_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct p9_fcall*,int ,char*,int *,int *,int *,char**) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct p9_client*,struct p9_fcall*) ;

int FUNC_5(struct p9_client *VAR_2, char *VAR_3, int VAR_4,
    struct p9_dirent *VAR_5)
{
 struct p9_fcall VAR_6;
 int VAR_7;
 char *VAR_8;

 VAR_6.size = VAR_4;
 VAR_6.capacity = VAR_4;
 VAR_6.sdata = VAR_3;
 VAR_6.offset = 0;

 VAR_7 = FUNC_2(&VAR_6, VAR_2->proto_version, "Qqbs", &VAR_5->qid,
     &VAR_5->d_off, &VAR_5->d_type, &VAR_8);
 if (VAR_7) {
  FUNC_1(VAR_0, "<<< p9dirent_read failed: %d\n", VAR_7);
  FUNC_4(VAR_2, &VAR_6);
  return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_5->d_name, VAR_8, sizeof(VAR_5->d_name));
 if (VAR_7 < 0) {
  FUNC_1(VAR_1,
    "On the wire dirent name too long: %s\n",
    VAR_8);
  FUNC_0(VAR_8);
  return VAR_7;
 }
 FUNC_0(VAR_8);

 return VAR_6.offset;
}
