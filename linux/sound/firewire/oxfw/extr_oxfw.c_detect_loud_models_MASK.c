
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_unit {int directory; } ;
typedef int model ;


 int FUNC_0 (char const* const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*,int) ;
 scalar_t__ FUNC_2 (char const* const*,int ,char*) ;

__attribute__((used)) static bool FUNC_3(struct fw_unit *VAR_1)
{
 const char *const VAR_2[] = {
  "Onyxi",
  "Onyx-i",
  "Onyx 1640i",
  "d.Pro",
  "Mackie Onyx Satellite",
  "Tapco LINK.firewire 4x6",
  "U.420"};
 char VAR_3[32];
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->directory, VAR_0,
       VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0)
  return 0;

 return FUNC_2(VAR_2, FUNC_0(VAR_2), VAR_3) >= 0;
}
