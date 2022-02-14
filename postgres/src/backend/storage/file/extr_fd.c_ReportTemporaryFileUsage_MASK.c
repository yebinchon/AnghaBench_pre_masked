
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char const*,unsigned long) ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, off_t VAR_3)
{
 FUNC_2(VAR_3);

 if (VAR_1 >= 0)
 {
  if ((VAR_3 / 1024) >= VAR_1)
   FUNC_0(VAR_0,
     (FUNC_1("temporary file: path \"%s\", size %lu",
       VAR_2, (unsigned long) VAR_3)));
 }
}
