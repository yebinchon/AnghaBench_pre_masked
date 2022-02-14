
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const ut8 ;
typedef int ut32 ;
struct TYPE_4__ {int length; int const* sector; } ;
typedef TYPE_1__ RASN1Object ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int const*,int,int ) ;

__attribute__((used)) static ut32 FUNC_2 (const ut8 *VAR_0, ut32 VAR_1) {
 if (!VAR_0 || !VAR_1) {
  return 0;
 }
 ut32 VAR_2 = 0;
 RASN1Object *VAR_3 = ((void*)0);
 const ut8 *VAR_4 = VAR_0;
 const ut8 *VAR_5 = VAR_0 + VAR_1;
 while (VAR_4 >= VAR_0 && VAR_4 < VAR_5) {

  VAR_3 = FUNC_1 (VAR_4, VAR_5 - VAR_4, 0);
  if (!VAR_3 || VAR_4 == VAR_3->sector) {
   FUNC_0 (VAR_3);
   break;
  }
  VAR_4 = VAR_3->sector + VAR_3->length;
  VAR_2++;
  FUNC_0 (VAR_3);
 }
 FUNC_0 (VAR_3);
 return VAR_2;
}
