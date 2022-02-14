
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {char* key; int frametype; } ;
typedef TYPE_1__ typekey_t ;
struct TYPE_4__ {char* name; scalar_t__ frametype; } ;
typedef TYPE_2__ field_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_1, const void *VAR_2) {
  field_t *VAR_3 = (field_t *) VAR_2;
  const char *VAR_4 = VAR_3->name;
  const typekey_t *VAR_5 = (const typekey_t *) VAR_1;
  const char *VAR_6 = VAR_5->key;

  if (!((uint32)VAR_6 & 3) && !((uint32)VAR_4 & 3)) {

    uint32 VAR_7 = FUNC_0(*(uint32 *) VAR_6);
    uint32 VAR_8 = FUNC_0(*(uint32 *) VAR_4);

    if (VAR_7 < VAR_8) {
      return -1;
    }
    if (VAR_7 > VAR_8) {
      return 1;
    }
  }

  int VAR_9 = FUNC_1((const char *) VAR_6, VAR_4);
  if (VAR_9) {
    return VAR_9;
  }

  if (VAR_3->frametype == VAR_0) {
    return 0;
  }

  return VAR_5->frametype - VAR_3->frametype;
}
