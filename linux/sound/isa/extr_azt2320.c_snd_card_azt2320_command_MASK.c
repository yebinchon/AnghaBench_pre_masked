
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int VAR_2 ;
 int FUNC_1 (unsigned char,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long,int) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_3, unsigned char VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;

 VAR_6 = VAR_2 + VAR_1 / 10;
 for (VAR_5 = 50000; VAR_5 && FUNC_2(VAR_6, VAR_2); VAR_5--)
  if (!(FUNC_0(VAR_3 + 0x0c) & 0x80)) {
   FUNC_1(VAR_4, VAR_3 + 0x0c);
   return 0;
  }
 return -VAR_0;
}
