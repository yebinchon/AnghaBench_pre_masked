
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iov_iter {unsigned int type; size_t count; scalar_t__ iov_offset; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

void FUNC_1(struct iov_iter *VAR_2, unsigned int VAR_3, size_t VAR_4)
{
 FUNC_0(VAR_3 != VAR_1);
 VAR_2->type = VAR_0 | VAR_1;
 VAR_2->count = VAR_4;
 VAR_2->iov_offset = 0;
}
