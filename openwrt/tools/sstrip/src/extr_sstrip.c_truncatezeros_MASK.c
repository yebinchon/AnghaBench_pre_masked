
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,unsigned long,int ) ;
 scalar_t__ FUNC_3 (int,unsigned char*,unsigned long) ;

__attribute__((used)) static int FUNC_4(int VAR_2, unsigned long *VAR_3)
{
 unsigned char VAR_4[1024];
 unsigned long VAR_5, VAR_6;

 VAR_5 = *VAR_3;
 do {
  VAR_6 = sizeof VAR_4;
  if (VAR_6 > VAR_5)
   VAR_6 = VAR_5;
  if (FUNC_2(VAR_2, VAR_5 - VAR_6, VAR_0) == (off_t)-1)
   return FUNC_1("cannot seek in file.");
  if (FUNC_3(VAR_2, VAR_4, VAR_6) != (ssize_t)VAR_6)
   return FUNC_1("cannot read file contents");
  while (VAR_6 && !VAR_4[--VAR_6])
   --VAR_5;
 } while (VAR_5 && !VAR_6);



 if (!VAR_5)
  return FUNC_0("ELF file is completely blank!");

 *VAR_3 = VAR_5;
 return VAR_1;
}
