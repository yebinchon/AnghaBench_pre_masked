
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short VAR_0 ;







 unsigned short VAR_1 ;

 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
__attribute__((used)) static unsigned short
FUNC_0(unsigned short VAR_4)
{
 static const struct {
  unsigned short azf_reg;
 } VAR_5[] = {
  { 130
   | 145
   | 147 },
  { 133 },

  { 139 },
  { 135 },
  { 141 },
  { 134 },
  { 136 },
  { 137 },
  { 138 },
  { 140 },
  { 129 },
  { 142 },
  { 128 },
  { 132 },
  { 131 },
  { 146 },
  { 143 },
  { 144 },
 };

 unsigned short VAR_6 = VAR_2;



 if (VAR_4 <= VAR_0) {
  unsigned short VAR_7 = VAR_4 / 2;
  VAR_6 = VAR_5[VAR_7].azf_reg;

  if (!(VAR_6 & ~VAR_3))
   VAR_6 |= VAR_1;
 } else {
  switch (VAR_4) {
  case 150:
   VAR_6 = 146;
   break;
  case 152:
   VAR_6 = 147;
   break;
  case 151:





   VAR_6 = 146;
   break;
  case 149:
  case 148:
   VAR_6 = 147;
   break;
  }
 }
 return VAR_6;
}
