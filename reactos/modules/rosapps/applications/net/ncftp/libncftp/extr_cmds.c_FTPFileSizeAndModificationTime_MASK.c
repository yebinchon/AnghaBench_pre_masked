
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int time_t ;
typedef int longest_int ;
struct TYPE_10__ {int magic; } ;
struct TYPE_9__ {int fsize; int ftime; } ;
typedef TYPE_1__ MLstItem ;
typedef TYPE_2__* FTPCIPtr ;


 int FUNC_0 (TYPE_2__* const,char const* const,int * const) ;
 int FUNC_1 (TYPE_2__* const,char const* const,int * const,int const) ;
 int FUNC_2 (TYPE_2__* const,char const* const,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__* const,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int ) ;

int
FUNC_5(const FTPCIPtr VAR_5, const char *const VAR_6, longest_int *const VAR_7, const int VAR_8, time_t *const VAR_9)
{
 MLstItem VAR_10;
 int VAR_11;

 if (VAR_5 == ((void*)0))
  return (VAR_1);
 if (FUNC_4(VAR_5->magic, VAR_2))
  return (VAR_0);

 if ((VAR_9 == ((void*)0)) || (VAR_7 == ((void*)0)) || (VAR_6 == ((void*)0)))
  return (VAR_1);

 *VAR_9 = VAR_3;
 *VAR_7 = VAR_4;

 VAR_11 = FUNC_3(VAR_5, VAR_8);
 if (VAR_11 < 0)
  return (VAR_11);

 VAR_11 = FUNC_2(VAR_5, VAR_6, &VAR_10);
 if (VAR_11 < 0) {



  VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
  if (VAR_11 < 0)
   return (VAR_11);
  VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_9);
  return (VAR_11);
 } else {
  *VAR_9 = VAR_10.ftime;
  *VAR_7 = VAR_10.fsize;
 }

 return (VAR_11);
}
