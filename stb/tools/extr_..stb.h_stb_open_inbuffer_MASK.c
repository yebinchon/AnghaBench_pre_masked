
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buffer; unsigned char* indata; unsigned char* inend; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ stbfile ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

stbfile *FUNC_1(void *VAR_8, unsigned int VAR_9)
{
   stbfile VAR_10 = { VAR_1, VAR_2,
                 VAR_6, VAR_7,
                 VAR_3, VAR_4, VAR_5, VAR_0 };
   stbfile *VAR_11 = (stbfile *) FUNC_0(sizeof(*VAR_11));
   if (VAR_11) {
      *VAR_11 = VAR_10;
      VAR_11->buffer = (unsigned char *) VAR_8;
      VAR_11->indata = VAR_11->buffer;
      VAR_11->inend = VAR_11->indata + VAR_9;
   }
   return VAR_11;
}
