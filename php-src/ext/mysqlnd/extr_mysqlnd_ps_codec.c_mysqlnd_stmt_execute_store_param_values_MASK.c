
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_uchar ;
struct TYPE_5__ {unsigned int param_count; TYPE_1__* param_bind; } ;
struct TYPE_4__ {int type; int flags; int zv; } ;
typedef TYPE_2__ MYSQLND_STMT_DATA ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ,size_t const) ;
 int * FUNC_14 (int *,size_t const) ;

__attribute__((used)) static void
FUNC_15(MYSQLND_STMT_DATA * VAR_3, zval * VAR_4, zend_uchar * VAR_5, zend_uchar ** VAR_6, size_t VAR_7)
{
 unsigned int VAR_8;
 for (VAR_8 = 0; VAR_8 < VAR_3->param_count; VAR_8++) {
  zval *VAR_9, *VAR_10 = &VAR_3->param_bind[VAR_8].zv;

  FUNC_0(VAR_10);
  VAR_9 = (VAR_4 && !FUNC_2(VAR_4[VAR_8]))? &VAR_4[VAR_8]: VAR_10;

  if (!FUNC_3(VAR_10) && FUNC_7(VAR_9) == VAR_0) {
   (VAR_5 + VAR_7)[VAR_8/8] |= (zend_uchar) (1 << (VAR_8 & 7));
  } else {
   switch (VAR_3->param_bind[VAR_8].type) {
    case 133:
     FUNC_8(VAR_9);
     FUNC_9(*VAR_6, FUNC_1(VAR_9));
     (*VAR_6) += 8;
     break;
    case 131:
     if (FUNC_7(VAR_9) == VAR_1) {
      goto send_string;
     }

     FUNC_12(*VAR_6, FUNC_4(VAR_9));
     (*VAR_6) += 8;
     break;
    case 132:
     if (FUNC_7(VAR_9) == VAR_1) {
      goto send_string;
     }

     FUNC_11(*VAR_6, FUNC_4(VAR_9));
     (*VAR_6) += 4;
     break;
    case 129:
     if (FUNC_7(VAR_9) == VAR_1) {
      goto send_string;
     }
     FUNC_10(*VAR_6, FUNC_4(VAR_9));
     (*VAR_6)++;
     break;
    case 130:
     if (VAR_3->param_bind[VAR_8].flags & VAR_2) {
      VAR_3->param_bind[VAR_8].flags &= ~VAR_2;
     } else {

      *VAR_6 = FUNC_14(*VAR_6, 0);
     }
     break;
    case 128:
send_string:
     {
      const size_t VAR_11 = FUNC_5(VAR_9);

      *VAR_6 = FUNC_14(*VAR_6, VAR_11);
      FUNC_13(*VAR_6, FUNC_6(VAR_9), VAR_11);
      (*VAR_6) += VAR_11;
     }
     break;
    default:

     (VAR_5 + VAR_7)[VAR_8/8] |= (zend_uchar) (1 << (VAR_8 & 7));
     break;
   }
  }
 }
}
