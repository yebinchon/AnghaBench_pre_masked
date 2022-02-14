
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct xt_multiport_v1 {unsigned int count; int flags; int invert; int * ports; scalar_t__* pflags; } ;





 int FUNC_0 (char*,int ,...) ;

__attribute__((used)) static inline bool
FUNC_1(const struct xt_multiport_v1 *VAR_0,
        u_int16_t VAR_1, u_int16_t VAR_2)
{
 unsigned int VAR_3;
 u_int16_t VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++) {
  VAR_4 = VAR_0->ports[VAR_3];

  if (VAR_0->pflags[VAR_3]) {

   VAR_5 = VAR_0->ports[++VAR_3];
   FUNC_0("src or dst matches with %d-%d?\n", VAR_4, VAR_5);

   switch (VAR_0->flags) {
   case 128:
    if (VAR_1 >= VAR_4 && VAR_1 <= VAR_5)
     return 1 ^ VAR_0->invert;
    break;
   case 130:
    if (VAR_2 >= VAR_4 && VAR_2 <= VAR_5)
     return 1 ^ VAR_0->invert;
    break;
   case 129:
    if ((VAR_2 >= VAR_4 && VAR_2 <= VAR_5) ||
        (VAR_1 >= VAR_4 && VAR_1 <= VAR_5))
     return 1 ^ VAR_0->invert;
    break;
   default:
    break;
   }
  } else {

   FUNC_0("src or dst matches with %d?\n", VAR_4);

   switch (VAR_0->flags) {
   case 128:
    if (VAR_1 == VAR_4)
     return 1 ^ VAR_0->invert;
    break;
   case 130:
    if (VAR_2 == VAR_4)
     return 1 ^ VAR_0->invert;
    break;
   case 129:
    if (VAR_1 == VAR_4 || VAR_2 == VAR_4)
     return 1 ^ VAR_0->invert;
    break;
   default:
    break;
   }
  }
 }

 return VAR_0->invert;
}
