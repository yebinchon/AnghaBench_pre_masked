
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef int ut32 ;
typedef int uint8_t ;
struct TYPE_3__ {int read_max; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_1(const ut8 *VAR_2, int VAR_3, ut64 VAR_4) {
 ut32 VAR_5, VAR_6;
 ut32 VAR_7;
 ut32 VAR_8;
 if (VAR_3 < 1 || VAR_4 >= VAR_0 || !VAR_1) {
  return -1;
 }
 VAR_6 = VAR_1->read_max;
 VAR_7 = VAR_3 / VAR_6;
 VAR_8 = VAR_3 % VAR_6;
 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  FUNC_0 (VAR_1, VAR_4 + VAR_5 * VAR_6,
   (const uint8_t*)(VAR_2 + VAR_5 * VAR_6), VAR_6);
 }
 if (VAR_8) {
  FUNC_0 (VAR_1, VAR_4 + VAR_5 * VAR_6,
   (VAR_2 + VAR_5 * VAR_6), VAR_8);
 }
 return VAR_3;
}
