
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef int ssize_t ;
typedef size_t __u8 ;


 int VAR_0 ;



 int FUNC_0 (char*,size_t,size_t,size_t const) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (void const*,size_t,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ssize_t
FUNC_4(struct thread *VAR_5, const void *VAR_6, size_t VAR_7)
{
 const __u8 *VAR_8;
 __u8 VAR_9;
 ssize_t VAR_10;
 size_t VAR_11;

 (void)VAR_5;

 switch (VAR_2) {
 case 128:
  VAR_9 = 0;
  for (VAR_8 = VAR_6, VAR_11 = 0; VAR_11 < VAR_7; ++VAR_8, ++VAR_11)
   if (*VAR_8)
    goto invalid;
  break;

 case 129:
  for (VAR_8 = VAR_6, VAR_11 = 0; VAR_11 < VAR_7; ++VAR_8, ++VAR_11)
   if (*VAR_8 != VAR_11 % 63) {
    VAR_9 = VAR_11 % 63;
    goto invalid;
   }
  break;

 case 130:
  VAR_10 = FUNC_3(VAR_6, VAR_7, 1, VAR_4);
  if (VAR_10 > 0)
   FUNC_1(VAR_4);
  break;

invalid:
  FUNC_0("bad OUT byte %zd, expected %02x got %02x\n",
      VAR_11, VAR_9, *VAR_8);
  for (VAR_8 = VAR_6, VAR_11 = 0; VAR_11 < VAR_7; ++VAR_8, ++VAR_11) {
   if (0 == (VAR_11 % 32))
    FUNC_2(VAR_3, "%4zd:", VAR_11);
   FUNC_2(VAR_3, " %02zx", *VAR_8);
   if (31 == (VAR_11 % 32))
    FUNC_2(VAR_3, "\n");
  }
  FUNC_1(VAR_3);
  VAR_1 = VAR_0;
  return -1;
 }

 return VAR_11;
}
