
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_ext_attr_header {scalar_t__ h_magic; int h_blocks; } ;
typedef int errcode_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static errcode_t FUNC_0(struct ext2_ext_attr_header *VAR_3)
{
 if ((VAR_3->h_magic != VAR_2 &&
      VAR_3->h_magic != VAR_1) ||
     VAR_3->h_blocks != 1)
  return VAR_0;

 return 0;
}
