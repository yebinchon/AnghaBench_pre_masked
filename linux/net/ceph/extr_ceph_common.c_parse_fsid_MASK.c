
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_fsid {int* fsid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char*,char*,int*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, struct ceph_fsid *VAR_2)
{
 int VAR_3 = 0;
 char VAR_4[3];
 int VAR_5 = -VAR_0;
 int VAR_6;

 FUNC_0("parse_fsid '%s'\n", VAR_1);
 VAR_4[2] = 0;
 while (*VAR_1 && VAR_3 < 16) {
  if (FUNC_1(*VAR_1)) {
   VAR_1++;
   continue;
  }
  if (!FUNC_2(VAR_1[0]) || !FUNC_2(VAR_1[1]))
   break;
  VAR_4[0] = VAR_1[0];
  VAR_4[1] = VAR_1[1];
  if (FUNC_3(VAR_4, "%x", &VAR_6) < 1)
   break;
  VAR_2->fsid[VAR_3] = VAR_6 & 0xff;
  VAR_3++;
  VAR_1 += 2;
 }

 if (VAR_3 == 16)
  VAR_5 = 0;
 FUNC_0("parse_fsid ret %d got fsid %pU\n", VAR_5, VAR_2);
 return VAR_5;
}
