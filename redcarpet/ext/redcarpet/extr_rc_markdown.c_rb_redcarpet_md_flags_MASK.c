
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VALUE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(VALUE VAR_15, unsigned int *VAR_16)
{
 unsigned int VAR_17 = 0;

 FUNC_1(VAR_15, VAR_14);




 if (FUNC_2(VAR_15, FUNC_0("no_intra_emphasis")) == VAR_13)
  VAR_17 |= VAR_6;

 if (FUNC_2(VAR_15, FUNC_0("tables")) == VAR_13)
  VAR_17 |= VAR_11;

 if (FUNC_2(VAR_15, FUNC_0("fenced_code_blocks")) == VAR_13)
  VAR_17 |= VAR_2;

 if (FUNC_2(VAR_15, FUNC_0("disable_indented_code_blocks")) == VAR_13)
  VAR_17 |= VAR_1;

 if (FUNC_2(VAR_15, FUNC_0("autolink")) == VAR_13)
  VAR_17 |= VAR_0;

 if (FUNC_2(VAR_15, FUNC_0("strikethrough")) == VAR_13)
  VAR_17 |= VAR_9;

 if (FUNC_2(VAR_15, FUNC_0("underline")) == VAR_13)
  VAR_17 |= VAR_12;

 if (FUNC_2(VAR_15, FUNC_0("highlight")) == VAR_13)
  VAR_17 |= VAR_4;

 if (FUNC_2(VAR_15, FUNC_0("quote")) == VAR_13)
  VAR_17 |= VAR_7;

 if (FUNC_2(VAR_15, FUNC_0("lax_spacing")) == VAR_13)
  VAR_17 |= VAR_5;

 if (FUNC_2(VAR_15, FUNC_0("space_after_headers")) == VAR_13)
  VAR_17 |= VAR_8;

 if (FUNC_2(VAR_15, FUNC_0("superscript")) == VAR_13)
  VAR_17 |= VAR_10;

 if (FUNC_2(VAR_15, FUNC_0("footnotes")) == VAR_13)
  VAR_17 |= VAR_3;

 *VAR_16 = VAR_17;
}
