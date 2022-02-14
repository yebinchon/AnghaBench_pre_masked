
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_do_fcopy {scalar_t__ size; int offset; int data; } ;
typedef scalar_t__ ssize_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ,long,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct hv_do_fcopy *VAR_6)
{
 ssize_t VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_0(VAR_5, VAR_6->data, VAR_6->size,
    VAR_6->offset);

 VAR_4 += VAR_6->size;
 if (VAR_7 != VAR_6->size) {
  switch (VAR_3) {
  case 128:
   VAR_8 = VAR_0;
   break;
  default:
   VAR_8 = VAR_1;
   break;
  }
  FUNC_2(VAR_2, "pwrite failed to write %llu bytes: %ld (%s)",
         VAR_4, (long)VAR_7, FUNC_1(VAR_3));
 }

 return VAR_8;
}
