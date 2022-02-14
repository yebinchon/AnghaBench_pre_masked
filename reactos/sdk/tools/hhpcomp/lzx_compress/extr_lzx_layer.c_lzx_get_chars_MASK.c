
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {scalar_t__ subdivide; int left_in_frame; int left_in_block; int (* get_bytes ) (int ,int,int *) ;int in_arg; } ;
typedef TYPE_1__ lzx_data ;
struct TYPE_5__ {scalar_t__ user_data; } ;
typedef TYPE_2__ lz_info ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int,int *) ;

__attribute__((used)) static int
FUNC_2(lz_info *VAR_1, int VAR_2, u_char *VAR_3)
{

  int VAR_4;
  int VAR_5;

  lzx_data *VAR_6 = (lzx_data *)VAR_1->user_data;







  VAR_4 = VAR_6->get_bytes(VAR_6->in_arg, VAR_2, VAR_3);




  VAR_6->left_in_frame -= VAR_4 % VAR_0;
  if (VAR_6->left_in_frame < 0)
    VAR_6->left_in_frame += VAR_0;

  if ((VAR_4 < VAR_2) && (VAR_6->left_in_frame)) {
    VAR_5 = VAR_2 - VAR_4;
    if (VAR_5 > VAR_6->left_in_frame) VAR_5 = VAR_6->left_in_frame;


    if (VAR_5 == VAR_0) VAR_5 = 0;



    FUNC_0(VAR_3 + VAR_4, 0, VAR_5);
    VAR_6->left_in_frame -= VAR_5;



    VAR_4 += VAR_5;
  }
  return VAR_4;
}
