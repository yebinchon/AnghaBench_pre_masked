
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int errNo; char const* const buf; int bufSize; int magic; } ;
struct TYPE_9__ {int ftype; } ;
typedef TYPE_1__ MLstItem ;
typedef TYPE_2__* FTPCIPtr ;


 int FUNC_0 (TYPE_2__* const,char const* const) ;
 int FUNC_1 (TYPE_2__* const,char const* const,int,int,int ,int,int) ;
 int FUNC_2 (TYPE_2__* const,char const* const,int ) ;
 int FUNC_3 (TYPE_2__* const,char const* const,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ,int ) ;

int
FUNC_5(const FTPCIPtr VAR_6, const char *const VAR_7, int *const VAR_8)
{
 int VAR_9;
 MLstItem VAR_10;

 if (VAR_6 == ((void*)0))
  return (VAR_1);
 if (FUNC_4(VAR_6->magic, VAR_4))
  return (VAR_0);

 if ((VAR_7 == ((void*)0)) || (VAR_7[0] == '\0')) {
  VAR_6->errNo = VAR_1;
  return (VAR_1);
 }

 if (VAR_8 == ((void*)0)) {
  VAR_6->errNo = VAR_1;
  return (VAR_1);
 }

 *VAR_8 = 0;
 VAR_9 = FUNC_3(VAR_6, VAR_7, &VAR_10);
 if (VAR_9 == VAR_5) {
  *VAR_8 = VAR_10.ftype;
  return (VAR_5);
 }


 (void) FUNC_2(VAR_6, VAR_6->buf, VAR_6->bufSize);

 VAR_9 = FUNC_0(VAR_6, VAR_7);
 if (VAR_9 == VAR_5) {
  *VAR_8 = 'd';



  (void) FUNC_0(VAR_6, VAR_6->buf);





  return (VAR_5);
 }

 VAR_9 = FUNC_1(VAR_6, VAR_7, 1, 1, 0, 1, 1);
 if (VAR_9 != VAR_3)
  VAR_9 = VAR_2;

 return (VAR_9);
}
