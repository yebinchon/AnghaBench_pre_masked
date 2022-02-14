
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct azx {unsigned char capture_index_offset; unsigned char capture_streams; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct azx *VAR_2, unsigned char VAR_3)
{
 if (VAR_3 >= VAR_2->capture_index_offset &&
     VAR_3 < VAR_2->capture_index_offset + VAR_2->capture_streams)
  return VAR_0;
 return VAR_1;
}
