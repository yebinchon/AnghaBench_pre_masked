
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum snd_ff_clock_src { ____Placeholder_snd_ff_clock_src } snd_ff_clock_src ;


 int FUNC_0 (char const* const*) ;

const char *FUNC_1(enum snd_ff_clock_src VAR_0)
{
 static const char *const VAR_1[] = {
  "Internal",
  "S/PDIF",
  "ADAT1",
  "ADAT2",
  "Word",
  "LTC",
 };

 if (VAR_0 >= FUNC_0(VAR_1))
  return ((void*)0);

 return VAR_1[VAR_0];
}
