
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct tffs_entry_header {int id; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline uint16_t FUNC_1(const struct tffs_entry_header *VAR_1)
{
 if (VAR_0)
  return FUNC_0(VAR_1->id);

 return VAR_1->id;
}
