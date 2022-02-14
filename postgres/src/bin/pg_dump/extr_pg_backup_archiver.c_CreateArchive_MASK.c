
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SetupWorkerPtrType ;
typedef int ArchiveMode ;
typedef int ArchiveHandle ;
typedef int ArchiveFormat ;
typedef int Archive ;


 int * FUNC_0 (char const*,int const,int const,int,int ,int ) ;

Archive *
FUNC_1(const char *VAR_0, const ArchiveFormat VAR_1,
     const int VAR_2, bool VAR_3, ArchiveMode VAR_4,
     SetupWorkerPtrType VAR_5)

{
 ArchiveHandle *VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
         VAR_4, VAR_5);

 return (Archive *) VAR_6;
}
