
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WriteFunc ;
struct TYPE_4__ {scalar_t__ comprAlg; int writeF; } ;
typedef TYPE_1__ CompressorState ;
typedef scalar_t__ CompressionAlgorithm ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int,scalar_t__*,int*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;

CompressorState *
FUNC_4(int VAR_1, WriteFunc VAR_2)
{
 CompressorState *VAR_3;
 CompressionAlgorithm VAR_4;
 int VAR_5;

 FUNC_1(VAR_1, &VAR_4, &VAR_5);


 if (VAR_4 == VAR_0)
  FUNC_2("not built with zlib support");


 VAR_3 = (CompressorState *) FUNC_3(sizeof(CompressorState));
 VAR_3->writeF = VAR_2;
 VAR_3->comprAlg = VAR_4;
 return VAR_3;
}
