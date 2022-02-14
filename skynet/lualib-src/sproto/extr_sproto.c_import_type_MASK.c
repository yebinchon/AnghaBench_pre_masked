
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sproto_type {int n; int maxn; int base; struct field* f; int name; } ;
struct sproto {int memory; } ;
struct field {int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int * FUNC_1 (struct sproto*,struct field*,int const*) ;
 int FUNC_2 (struct sproto*,int const*) ;
 int FUNC_3 (struct sproto_type*,int ,int) ;
 struct field* FUNC_4 (int *,int) ;
 int FUNC_5 (int const*,int) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;

__attribute__((used)) static const uint8_t *
FUNC_8(struct sproto *VAR_3, struct sproto_type *VAR_4, const uint8_t * VAR_5) {
 const uint8_t * VAR_6;
 uint32_t VAR_7 = FUNC_6(VAR_5);
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 VAR_5 += VAR_2;
 VAR_6 = VAR_5 + VAR_7;
 VAR_9 = FUNC_5(VAR_5, VAR_7);
 if (VAR_9 <= 0 || VAR_9 > 2)
  return ((void*)0);
 for (VAR_8=0;VAR_8<VAR_9*VAR_0;VAR_8+=VAR_0) {

  int VAR_13 = FUNC_7(VAR_5 + VAR_1 + VAR_8);
  if (VAR_13 != 0)
   return ((void*)0);
 }
 FUNC_3(VAR_4, 0, sizeof(*VAR_4));
 VAR_5 += VAR_1 + VAR_9 * VAR_0;
 VAR_4->name = FUNC_2(VAR_3, VAR_5);
 if (VAR_9 == 1) {
  return VAR_6;
 }
 VAR_5 += FUNC_6(VAR_5)+VAR_2;
 VAR_10 = FUNC_0(VAR_5);
 if (VAR_10<0)
  return ((void*)0);
 VAR_5 += VAR_2;
 VAR_11 = VAR_10;
 VAR_12 = -1;
 VAR_4->n = VAR_10;
 VAR_4->f = FUNC_4(&VAR_3->memory, sizeof(struct field) * VAR_10);
 for (VAR_8=0;VAR_8<VAR_10;VAR_8++) {
  int VAR_14;
  struct field *VAR_15 = &VAR_4->f[VAR_8];
  VAR_5 = FUNC_1(VAR_3, VAR_15, VAR_5);
  if (VAR_5 == ((void*)0))
   return ((void*)0);
  VAR_14 = VAR_15->tag;
  if (VAR_14 <= VAR_12)
   return ((void*)0);
  if (VAR_14 > VAR_12+1) {
   ++VAR_11;
  }
  VAR_12 = VAR_14;
 }
 VAR_4->maxn = VAR_11;
 VAR_4->base = VAR_4->f[0].tag;
 VAR_10 = VAR_4->f[VAR_10-1].tag - VAR_4->base + 1;
 if (VAR_10 != VAR_4->n) {
  VAR_4->base = -1;
 }
 return VAR_6;
}
