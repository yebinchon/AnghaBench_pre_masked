
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int ssl; } ;
typedef TYPE_1__ Port ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 () ;
 scalar_t__ VAR_3 ;






 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,void*,size_t) ;
 int FUNC_4 (unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int) ;
 scalar_t__ VAR_6 ;

ssize_t
FUNC_8(Port *VAR_7, void *VAR_8, size_t VAR_9, int *VAR_10)
{
 ssize_t VAR_11;
 int VAR_12;
 unsigned long VAR_13;

 VAR_6 = 0;
 FUNC_0();
 VAR_11 = FUNC_3(VAR_7->ssl, VAR_8, VAR_9);
 VAR_12 = FUNC_2(VAR_7->ssl, VAR_11);
 VAR_13 = (VAR_12 != 133 || VAR_11 < 0) ? FUNC_1() : 0;
 switch (VAR_12)
 {
  case 133:

   break;
  case 130:
   *VAR_10 = VAR_4;
   VAR_6 = VAR_3;
   VAR_11 = -1;
   break;
  case 129:
   *VAR_10 = VAR_5;
   VAR_6 = VAR_3;
   VAR_11 = -1;
   break;
  case 131:

   if (VAR_11 != -1)
   {
    VAR_6 = VAR_1;
    VAR_11 = -1;
   }
   break;
  case 132:
   FUNC_5(VAR_0,
     (FUNC_6(VAR_2),
      FUNC_7("SSL error: %s", FUNC_4(VAR_13))));
   VAR_6 = VAR_1;
   VAR_11 = -1;
   break;
  case 128:





   VAR_6 = VAR_1;
   VAR_11 = -1;
   break;
  default:
   FUNC_5(VAR_0,
     (FUNC_6(VAR_2),
      FUNC_7("unrecognized SSL error code: %d",
       VAR_12)));
   VAR_6 = VAR_1;
   VAR_11 = -1;
   break;
 }

 return VAR_11;
}
