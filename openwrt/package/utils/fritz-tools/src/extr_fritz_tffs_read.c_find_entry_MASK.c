
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct tffs_entry_header {int dummy; } ;
struct tffs_entry {TYPE_1__* header; } ;
struct TYPE_3__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__,struct tffs_entry*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(uint8_t *VAR_2, uint16_t VAR_3, struct tffs_entry *VAR_4)
{
 uint32_t VAR_5 = 0;

 do {
  FUNC_3(VAR_2, VAR_5, VAR_4);

  if (FUNC_0(VAR_4->header) == VAR_3)
   return 1;

  VAR_5 += sizeof(struct tffs_entry_header);
  VAR_5 += FUNC_2(FUNC_1(VAR_4->header));
 } while (VAR_5 < VAR_1 && VAR_4->header->id != VAR_0);

 return 0;
}
