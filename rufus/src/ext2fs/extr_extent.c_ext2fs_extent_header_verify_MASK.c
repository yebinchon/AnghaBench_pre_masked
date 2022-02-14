
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext3_extent_idx {int dummy; } ;
struct ext3_extent_header {scalar_t__ eh_depth; int eh_max; int eh_entries; int eh_magic; } ;
struct ext3_extent {int dummy; } ;
typedef int errcode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ext3_extent_header*) ;
 int FUNC_1 (int ) ;

errcode_t FUNC_2(void *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct ext3_extent_header *VAR_6 = VAR_2;

 FUNC_0(VAR_6);
 if (FUNC_1(VAR_6->eh_magic) != VAR_1)
  return VAR_0;
 if (FUNC_1(VAR_6->eh_entries) > FUNC_1(VAR_6->eh_max))
  return VAR_0;
 if (VAR_6->eh_depth == 0)
  VAR_5 = sizeof(struct ext3_extent);
 else
  VAR_5 = sizeof(struct ext3_extent_idx);

 VAR_4 = (VAR_3 - sizeof(*VAR_6)) / VAR_5;


 if ((FUNC_1(VAR_6->eh_max) > VAR_4) ||
     (FUNC_1(VAR_6->eh_max) < (VAR_4 - 2)))
  return VAR_0;

 return 0;
}
