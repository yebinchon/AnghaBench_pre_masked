
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ReadFunc ;
typedef scalar_t__ CompressionAlgorithm ;
typedef int ArchiveHandle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;

void
FUNC_4(ArchiveHandle *VAR_2, int VAR_3, ReadFunc VAR_4)
{
 CompressionAlgorithm VAR_5;

 FUNC_0(VAR_3, &VAR_5, ((void*)0));

 if (VAR_5 == VAR_1)
  FUNC_1(VAR_2, VAR_4);
 if (VAR_5 == VAR_0)
 {



  FUNC_3("not built with zlib support");

 }
}
