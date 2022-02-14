
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_12__ {scalar_t__ disable_mdc; scalar_t__ compress_algo; scalar_t__ compress_level; scalar_t__ convert_crlf; scalar_t__ text_mode; scalar_t__ pub_key; scalar_t__ sym_key; } ;
typedef int PushFilter ;
typedef TYPE_1__ PGP_Context ;
typedef int MBuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **,TYPE_1__*,int *) ;
 int FUNC_1 (int **,TYPE_1__*,int *) ;
 int FUNC_2 (int **,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int **) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int **,int *,TYPE_1__*,int *) ;
 int FUNC_9 (int **,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 int FUNC_14 (TYPE_1__*,int *) ;

int
FUNC_15(PGP_Context *VAR_4, MBuf *VAR_5, MBuf *VAR_6)
{
 int VAR_7;
 int VAR_8;
 uint8 *VAR_9;
 PushFilter *VAR_10,
      *VAR_11;




 if (!VAR_4->sym_key && !VAR_4->pub_key)
  return VAR_0;


 VAR_7 = FUNC_9(&VAR_10, VAR_6);
 if (VAR_7 < 0)
  goto out;




 if (VAR_4->sym_key)
 {
  VAR_7 = FUNC_3(VAR_4);
  if (VAR_7 < 0)
   goto out;
 }

 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7 < 0)
  goto out;




 if (VAR_4->pub_key)
  VAR_7 = FUNC_7(VAR_4, VAR_10);
 else
  VAR_7 = FUNC_14(VAR_4, VAR_10);
 if (VAR_7 < 0)
  goto out;


 VAR_7 = FUNC_1(&VAR_11, VAR_4, VAR_10);
 if (VAR_7 < 0)
  goto out;
 VAR_10 = VAR_11;


 VAR_7 = FUNC_8(&VAR_11, &VAR_2, VAR_4, VAR_10);
 if (VAR_7 < 0)
  goto out;
 VAR_10 = VAR_11;


 if (VAR_4->disable_mdc == 0)
 {
  VAR_7 = FUNC_8(&VAR_11, &VAR_3, VAR_4, VAR_10);
  if (VAR_7 < 0)
   goto out;
  VAR_10 = VAR_11;
 }


 VAR_7 = FUNC_13(VAR_4, VAR_10);
 if (VAR_7 < 0)
  goto out;


 if (VAR_4->compress_algo > 0 && VAR_4->compress_level > 0)
 {
  VAR_7 = FUNC_0(&VAR_11, VAR_4, VAR_10);
  if (VAR_7 < 0)
   goto out;
  VAR_10 = VAR_11;
 }


 VAR_7 = FUNC_2(&VAR_11, VAR_4, VAR_10);
 if (VAR_7 < 0)
  goto out;
 VAR_10 = VAR_11;



 if (VAR_4->text_mode && VAR_4->convert_crlf)
 {
  VAR_7 = FUNC_8(&VAR_11, &VAR_1, VAR_4, VAR_10);
  if (VAR_7 < 0)
   goto out;
  VAR_10 = VAR_11;
 }





 VAR_8 = FUNC_6(VAR_5, FUNC_5(VAR_5), &VAR_9);
 VAR_7 = FUNC_12(VAR_10, VAR_9, VAR_8);
 if (VAR_7 >= 0)
  VAR_7 = FUNC_10(VAR_10);
out:
 FUNC_11(VAR_10);
 return VAR_7;
}
