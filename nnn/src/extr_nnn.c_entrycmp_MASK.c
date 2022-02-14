
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uchar ;
struct entry {int flags; scalar_t__ t; scalar_t__ size; scalar_t__ blocks; scalar_t__ name; } ;
typedef struct entry* pEntry ;
struct TYPE_2__ {scalar_t__ extnorder; scalar_t__ blkorder; scalar_t__ sizeorder; scalar_t__ mtimeorder; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int *,char,int ) ;

__attribute__((used)) static int FUNC_4(const void *VAR_2, const void *VAR_3)
{
 const struct entry *VAR_4 = (pEntry)VAR_2;
 const struct entry *VAR_5 = (pEntry)VAR_3;

 if ((VAR_5->flags & VAR_0) != (VAR_4->flags & VAR_0)) {
  if (VAR_5->flags & VAR_0)
   return 1;
  return -1;
 }


 if (VAR_1.mtimeorder) {
  if (VAR_5->t > VAR_4->t)
   return 1;
  if (VAR_5->t < VAR_4->t)
   return -1;
 } else if (VAR_1.sizeorder) {
  if (VAR_5->size > VAR_4->size)
   return 1;
  if (VAR_5->size < VAR_4->size)
   return -1;
 } else if (VAR_1.blkorder) {
  if (VAR_5->blocks > VAR_4->blocks)
   return 1;
  if (VAR_5->blocks < VAR_4->blocks)
   return -1;
 } else if (VAR_1.extnorder && !(VAR_5->flags & VAR_0)) {
  char *VAR_6 = FUNC_3((uchar *)VAR_4->name, '.', FUNC_2(VAR_4->name));
  char *VAR_7 = FUNC_3((uchar *)VAR_5->name, '.', FUNC_2(VAR_5->name));

  if (VAR_6 || VAR_7) {
   if (!VAR_6)
    return 1;

   if (!VAR_7)
    return -1;

   int VAR_8 = FUNC_1(VAR_6, VAR_7);

   if (VAR_8)
    return VAR_8;
  }
 }

 return FUNC_0(VAR_4->name, VAR_5->name);
}
