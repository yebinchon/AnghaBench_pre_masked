
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

unsigned
FUNC_4(const char *VAR_2, unsigned VAR_3, char *VAR_4)
{
 const char *VAR_5,
      *VAR_6;
 char VAR_7,
    VAR_8,
      *VAR_9;

 VAR_6 = VAR_2 + VAR_3;
 VAR_5 = VAR_2;
 VAR_9 = VAR_4;
 while (VAR_5 < VAR_6)
 {
  if (*VAR_5 == ' ' || *VAR_5 == '\n' || *VAR_5 == '\t' || *VAR_5 == '\r')
  {
   VAR_5++;
   continue;
  }
  VAR_7 = FUNC_3(*VAR_5++) << 4;
  if (VAR_5 >= VAR_6)
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_2("invalid hexadecimal data: odd number of digits")));

  VAR_8 = FUNC_3(*VAR_5++);
  *VAR_9++ = VAR_7 | VAR_8;
 }

 return VAR_9 - VAR_4;
}
