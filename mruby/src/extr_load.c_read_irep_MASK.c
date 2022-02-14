
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct rite_section_header {int section_size; int section_ident; } ;
struct rite_binary_header {int dummy; } ;
typedef int mrb_state ;
typedef int mrb_irep ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*,size_t,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 size_t FUNC_3 () ;
 int FUNC_4 (int const*,size_t,size_t*,scalar_t__*,int *) ;
 int FUNC_5 (int *,int const*,int *,int ) ;
 int * FUNC_6 (int *,int const*,int ) ;
 int FUNC_7 (int *,int const*,int *,int ) ;

__attribute__((used)) static mrb_irep*
FUNC_8(mrb_state *VAR_5, const uint8_t *VAR_6, size_t VAR_7, uint8_t VAR_8)
{
  int VAR_9;
  mrb_irep *VAR_10 = ((void*)0);
  const struct rite_section_header *VAR_11;
  uint16_t VAR_12;
  size_t VAR_13 = 0;
  size_t VAR_14;

  if ((VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0))) {
    return ((void*)0);
  }

  VAR_9 = FUNC_4(VAR_6, VAR_7, &VAR_13, &VAR_12, &VAR_8);
  if (VAR_9 != VAR_0) {
    return ((void*)0);
  }

  VAR_14 = FUNC_3();
  if (VAR_12 != FUNC_1(VAR_6 + VAR_14, VAR_13 - VAR_14, 0)) {
    return ((void*)0);
  }

  VAR_6 += sizeof(struct rite_binary_header);
  do {
    VAR_11 = (const struct rite_section_header *)VAR_6;
    if (FUNC_2(VAR_11->section_ident, VAR_3, sizeof(VAR_11->section_ident)) == 0) {
      VAR_10 = FUNC_6(VAR_5, VAR_6, VAR_8);
      if (!VAR_10) return ((void*)0);
    }
    else if (FUNC_2(VAR_11->section_ident, VAR_2, sizeof(VAR_11->section_ident)) == 0) {
      if (!VAR_10) return ((void*)0);
      VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_10, VAR_8);
      if (VAR_9 < VAR_0) {
        return ((void*)0);
      }
    }
    else if (FUNC_2(VAR_11->section_ident, VAR_4, sizeof(VAR_11->section_ident)) == 0) {
      if (!VAR_10) return ((void*)0);
      VAR_9 = FUNC_7(VAR_5, VAR_6, VAR_10, VAR_8);
      if (VAR_9 < VAR_0) {
        return ((void*)0);
      }
    }
    VAR_6 += FUNC_0(VAR_11->section_size);
  } while (FUNC_2(VAR_11->section_ident, VAR_1, sizeof(VAR_11->section_ident)) != 0);

  return VAR_10;
}
