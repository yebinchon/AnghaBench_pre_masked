
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errseq_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int*,int,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;

errseq_t FUNC_6(errseq_t *VAR_3, int VAR_4)
{
 errseq_t VAR_5, VAR_6;


 FUNC_0(VAR_2 + 1);







 VAR_6 = FUNC_1(*VAR_3);

 if (FUNC_2(FUNC_5(VAR_4 == 0 || (unsigned int)-VAR_4 > VAR_2),
    "err = %d\n", VAR_4))
  return VAR_6;

 for (;;) {
  errseq_t VAR_7;


  VAR_7 = (VAR_6 & ~(VAR_2|VAR_1)) | -VAR_4;


  if (VAR_6 & VAR_1)
   VAR_7 += VAR_0;


  if (VAR_7 == VAR_6) {
   VAR_5 = VAR_7;
   break;
  }


  VAR_5 = FUNC_3(VAR_3, VAR_6, VAR_7);





  if (FUNC_4(VAR_5 == VAR_6 || VAR_5 == VAR_7))
   break;


  VAR_6 = VAR_5;
 }
 return VAR_5;
}
