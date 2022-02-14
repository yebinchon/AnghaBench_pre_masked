
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char const*,int ) ;
 int VAR_5 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int ,char*,int,int ) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int ,...) ;

__attribute__((used)) static int FUNC_8(const char *VAR_6, ssize_t VAR_7)
{
 unsigned long long VAR_8 = 0;
 char VAR_9[VAR_0], *VAR_10;
 off_t VAR_11 = FUNC_2(VAR_5, 0, VAR_3);
 int VAR_12, VAR_13;
 int VAR_14 = -VAR_1;

 VAR_13 = FUNC_3(VAR_6, VAR_2);
 if (VAR_13 < 0) {
  FUNC_4("Can't read '%s'", VAR_6);
  return -VAR_4;
 }


 if (VAR_7) {
  if (FUNC_7(VAR_5, &VAR_8, VAR_7) != VAR_7)
   goto out;
 }

 do {
  VAR_12 = FUNC_6(VAR_13, VAR_9, VAR_0);
  if (VAR_12 > 0) {
   VAR_8 += VAR_12;
   if (FUNC_7(VAR_5, VAR_9, VAR_12) != VAR_12)
    goto out;
  }
 } while (VAR_12 > 0);


 VAR_10 = (char*)&VAR_8;
 if (FUNC_0())
  VAR_10 += sizeof(u64) - VAR_7;

 if (VAR_7 && FUNC_5(VAR_5, VAR_10, VAR_7, VAR_11) < 0) {
  FUNC_4("writing file size failed\n");
  goto out;
 }

 VAR_14 = 0;
out:
 FUNC_1(VAR_13);
 return VAR_14;
}
