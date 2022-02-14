
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ext2_off_t ;
typedef int ext2_file_t ;
typedef int errcode_t ;
typedef scalar_t__ __u64 ;


 int FUNC_0 (int ,scalar_t__,int,scalar_t__*) ;

errcode_t FUNC_1(ext2_file_t VAR_0, ext2_off_t VAR_1,
       int VAR_2, ext2_off_t *VAR_3)
{
 __u64 VAR_4, VAR_5 = 0;
 errcode_t VAR_6;

 VAR_4 = VAR_1;
 VAR_6 = FUNC_0(VAR_0, VAR_4, VAR_2, &VAR_5);
 if (VAR_3)
  *VAR_3 = (ext2_off_t) VAR_5;
 return VAR_6;
}
