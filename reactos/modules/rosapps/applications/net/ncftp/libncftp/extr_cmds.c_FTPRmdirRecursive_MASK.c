
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* const buf; void* errNo; int bufSize; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const,char const* const) ;
 int FUNC_1 (TYPE_1__* const,char const* const,int ) ;
 int FUNC_2 (TYPE_1__* const,char const* const,int ,int ) ;
 int FUNC_3 (TYPE_1__* const) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(const FTPCIPtr VAR_4, const char *const VAR_5)
{
 int VAR_6, VAR_7;


 (void) FUNC_1(VAR_4, VAR_4->buf, VAR_4->bufSize);

 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6 != VAR_2) {
  return (VAR_6);
 }

 VAR_6 = FUNC_3(VAR_4);

 if (FUNC_0(VAR_4, VAR_4->buf) != VAR_2) {

  if (VAR_6 != VAR_2) {
   VAR_6 = VAR_0;
   VAR_4->errNo = VAR_0;
  }
  return (VAR_6);
 }




 VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_3, VAR_1);
 if ((VAR_7 != VAR_2) && (VAR_6 == VAR_2))
  VAR_6 = VAR_7;

 return (VAR_6);
}
