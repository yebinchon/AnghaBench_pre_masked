
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtd_info {int dummy; } ;
typedef int magic ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mtd_info*,size_t,int,size_t*,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_3, size_t VAR_4)
{
 u32 VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_4, sizeof(VAR_5), &VAR_6,
         (unsigned char *) &VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_6 != sizeof(VAR_5))
  return -VAR_1;

 if (FUNC_0(VAR_5) != VAR_2 &&
     VAR_5 != 0x19852003)
  return -VAR_0;

 return 0;
}
