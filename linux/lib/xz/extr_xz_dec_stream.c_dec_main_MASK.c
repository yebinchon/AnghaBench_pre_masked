
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int size; int pos; } ;
struct TYPE_7__ {int size; int hash; } ;
struct TYPE_6__ {int compressed; int hash; } ;
struct TYPE_5__ {int size; } ;
struct xz_dec {size_t in_start; int sequence; TYPE_4__ temp; TYPE_3__ index; TYPE_2__ block; int check_type; TYPE_1__ block_header; } ;
struct xz_buf {size_t in_pos; size_t in_size; int * in; } ;
typedef enum xz_ret { ____Placeholder_xz_ret } xz_ret ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xz_dec*,struct xz_buf*) ;
 int FUNC_1 (struct xz_dec*,struct xz_buf*) ;
 int FUNC_2 (struct xz_dec*,struct xz_buf*) ;
 int FUNC_3 (struct xz_dec*) ;
 int FUNC_4 (struct xz_dec*,struct xz_buf*) ;
 int FUNC_5 (struct xz_dec*) ;
 int FUNC_6 (struct xz_dec*) ;
 int FUNC_7 (struct xz_dec*,struct xz_buf*) ;
 int FUNC_8 (struct xz_dec*,struct xz_buf*) ;
 int FUNC_9 (int *,int *,int) ;

__attribute__((used)) static enum xz_ret FUNC_10(struct xz_dec *VAR_5, struct xz_buf *VAR_6)
{
 enum xz_ret VAR_7;





 VAR_5->in_start = VAR_6->in_pos;

 while (1) {
  switch (VAR_5->sequence) {
  case 128:
   if (!FUNC_7(VAR_5, VAR_6))
    return VAR_3;
   VAR_5->sequence = 134;

   VAR_7 = FUNC_6(VAR_5);
   if (VAR_7 != VAR_3)
    return VAR_7;



  case 134:

   if (VAR_6->in_pos == VAR_6->in_size)
    return VAR_3;


   if (VAR_6->in[VAR_6->in_pos] == 0) {
    VAR_5->in_start = VAR_6->in_pos++;
    VAR_5->sequence = 132;
    break;
   }





   VAR_5->block_header.size
    = ((uint32_t)VAR_6->in[VAR_6->in_pos] + 1) * 4;

   VAR_5->temp.size = VAR_5->block_header.size;
   VAR_5->temp.pos = 0;
   VAR_5->sequence = 136;



  case 136:
   if (!FUNC_7(VAR_5, VAR_6))
    return VAR_3;

   VAR_7 = FUNC_3(VAR_5);
   if (VAR_7 != VAR_3)
    return VAR_7;

   VAR_5->sequence = 133;



  case 133:
   VAR_7 = FUNC_2(VAR_5, VAR_6);
   if (VAR_7 != VAR_4)
    return VAR_7;

   VAR_5->sequence = 135;



  case 135:







   while (VAR_5->block.compressed & 3) {
    if (VAR_6->in_pos == VAR_6->in_size)
     return VAR_3;

    if (VAR_6->in[VAR_6->in_pos++] != 0)
     return VAR_2;

    ++VAR_5->block.compressed;
   }

   VAR_5->sequence = 137;



  case 137:
   if (VAR_5->check_type == VAR_1) {
    VAR_7 = FUNC_1(VAR_5, VAR_6);
    if (VAR_7 != VAR_4)
     return VAR_7;
   }






   VAR_5->sequence = 134;
   break;

  case 132:
   VAR_7 = FUNC_4(VAR_5, VAR_6);
   if (VAR_7 != VAR_4)
    return VAR_7;

   VAR_5->sequence = 130;



  case 130:
   while ((VAR_5->index.size + (VAR_6->in_pos - VAR_5->in_start))
     & 3) {
    if (VAR_6->in_pos == VAR_6->in_size) {
     FUNC_8(VAR_5, VAR_6);
     return VAR_3;
    }

    if (VAR_6->in[VAR_6->in_pos++] != 0)
     return VAR_2;
   }


   FUNC_8(VAR_5, VAR_6);


   if (!FUNC_9(&VAR_5->block.hash, &VAR_5->index.hash,
     sizeof(VAR_5->block.hash)))
    return VAR_2;

   VAR_5->sequence = 131;



  case 131:
   VAR_7 = FUNC_1(VAR_5, VAR_6);
   if (VAR_7 != VAR_4)
    return VAR_7;

   VAR_5->temp.size = VAR_0;
   VAR_5->sequence = 129;



  case 129:
   if (!FUNC_7(VAR_5, VAR_6))
    return VAR_3;

   return FUNC_5(VAR_5);
  }
 }


}
