
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_efw_phys_grp {size_t type; } ;


 size_t FUNC_0 (char const* const*) ;

__attribute__((used)) static inline const char*
FUNC_1(struct snd_efw_phys_grp *VAR_0, bool VAR_1)
{
 static const char *const VAR_2[] = {
  "Analog", "S/PDIF", "ADAT", "S/PDIF or ADAT", "Mirroring",
  "Headphones", "I2S", "Guitar", "Pirzo Guitar", "Guitar String",
 };

 if (VAR_0->type < FUNC_0(VAR_2))
  return VAR_2[VAR_0->type];
 else if (VAR_1)
  return "Input";
 else
  return "Output";
}
