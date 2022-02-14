
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int N; int e; int q; int p; int qP; int dQ; int dP; } ;
typedef TYPE_1__ rsa_key ;
typedef int mp_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned char*,int ,unsigned long) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (int *,unsigned char const*,int) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,unsigned char*) ;
 unsigned long FUNC_11 (int *) ;
 int FUNC_12 (int) ;

int FUNC_13(const unsigned char *VAR_9, unsigned long VAR_10,
                      unsigned char *VAR_11, unsigned long *VAR_12, int VAR_13,
                      rsa_key *VAR_14)
{
   mp_int VAR_15, VAR_16, VAR_17;
   unsigned long VAR_18;
   int VAR_19;


   if (VAR_13 == VAR_7 && (VAR_14->type != VAR_7)) {
      return VAR_4;
   }


   if (VAR_13 != VAR_7 && VAR_13 != VAR_8) {
      return VAR_3;
   }


   if ((VAR_19 = FUNC_5(&VAR_15, &VAR_16, &VAR_17, ((void*)0))) != VAR_6) { return FUNC_12(VAR_19); }
   if ((VAR_19 = FUNC_8(&VAR_15, VAR_9, (int)VAR_10)) != VAR_6) { goto error; }


   if (FUNC_3(&VAR_14->N, &VAR_15) == VAR_5) {
      VAR_19 = VAR_2;
      goto done;
   }


   if (VAR_13 == VAR_7) {

      if ((VAR_19 = FUNC_12(FUNC_4(&VAR_15, &VAR_14->dP, &VAR_14->p, &VAR_16))) != VAR_6) { goto error; }


      if ((VAR_19 = FUNC_12(FUNC_4(&VAR_15, &VAR_14->dQ, &VAR_14->q, &VAR_17))) != VAR_6) { goto error; }


      if ((VAR_19 = FUNC_9(&VAR_16, &VAR_17, &VAR_15)) != VAR_6) { goto error; }
      if ((VAR_19 = FUNC_7(&VAR_15, &VAR_14->qP, &VAR_14->p, &VAR_15)) != VAR_6) { goto error; }


      if ((VAR_19 = FUNC_6(&VAR_15, &VAR_14->q, &VAR_15)) != VAR_6) { goto error; }
      if ((VAR_19 = FUNC_1(&VAR_15, &VAR_17, &VAR_15)) != VAR_6) { goto error; }
   } else {

      if ((VAR_19 = FUNC_4(&VAR_15, &VAR_14->e, &VAR_14->N, &VAR_15)) != VAR_6) { goto error; }
   }


   VAR_18 = (unsigned long)FUNC_11(&VAR_14->N);
   if (VAR_18 > *VAR_12) {
      VAR_19 = VAR_0;
      goto done;
   }
   *VAR_12 = VAR_18;


   FUNC_0(VAR_11, 0, VAR_18);
   if ((VAR_19 = FUNC_10(&VAR_15, VAR_11+(VAR_18-FUNC_11(&VAR_15)))) != VAR_6) { goto error; }


   VAR_19 = VAR_1;
   goto done;
error:
   VAR_19 = FUNC_12(VAR_19);
done:
   FUNC_2(&VAR_15, &VAR_16, &VAR_17, ((void*)0));
   return VAR_19;
}
