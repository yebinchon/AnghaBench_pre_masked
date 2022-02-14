
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u32 ;
struct uimage_header {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,size_t,int*) ;

__attribute__((used)) static ssize_t FUNC_3(u_char *VAR_4, size_t VAR_5, int *VAR_6)
{
 u32 *VAR_7;

 if (VAR_5 < VAR_2 + sizeof(struct uimage_header)) {
  FUNC_1("Buffer too small for checking Edimax header\n");
  return -VAR_1;
 }

 VAR_7 = (u32 *)VAR_4;
 if (FUNC_0(*VAR_7) != VAR_3)
  return -VAR_0;

 if (!FUNC_2(VAR_4 + VAR_2, VAR_5, VAR_6))
  return VAR_2;

 return -VAR_0;
}
