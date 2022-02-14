
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,unsigned char const*) ;
 char* VAR_2 ;

__attribute__((used)) static inline unsigned char
FUNC_3(const unsigned char *VAR_3, const unsigned char *VAR_4)
{
 unsigned char VAR_5 = 0;
 signed char VAR_6;


 if (*VAR_3 > 127)
  goto invalid_input;

 VAR_6 = VAR_2[*VAR_3];
 if (VAR_6 < 0)
  goto invalid_input;

 VAR_5 = VAR_6 << 4;


 VAR_3++;

 if (*VAR_3 > 127)
  goto invalid_input;

 VAR_6 = VAR_2[*VAR_3];
 if (VAR_6 < 0)
  goto invalid_input;

 VAR_5 += VAR_6;

 return VAR_5;

invalid_input:
 FUNC_0(VAR_1,
   (FUNC_1(VAR_0),
    FUNC_2("invalid input syntax for type %s: \"%s\"", "macaddr8",
     VAR_4)));


 return 0;
}
