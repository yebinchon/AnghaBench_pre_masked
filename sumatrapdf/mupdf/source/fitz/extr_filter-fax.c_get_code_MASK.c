
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int word; } ;
typedef TYPE_1__ fz_faxd ;
typedef int fz_context ;
struct TYPE_7__ {int val; int nbits; } ;
typedef TYPE_2__ cfd_node ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_1(fz_context *VAR_0, fz_faxd *VAR_1, const cfd_node *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_1->word;
 int VAR_5 = VAR_4 >> (32 - VAR_3);
 int VAR_6 = VAR_2[VAR_5].val;
 int VAR_7 = VAR_2[VAR_5].nbits;

 if (VAR_7 > VAR_3)
 {
  int VAR_8 = (1 << (32 - VAR_3)) - 1;
  VAR_5 = VAR_6 + ((VAR_4 & VAR_8) >> (32 - VAR_7));
  VAR_6 = VAR_2[VAR_5].val;
  VAR_7 = VAR_3 + VAR_2[VAR_5].nbits;
 }

 FUNC_0(VAR_1, VAR_7);

 return VAR_6;
}
