
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_4__ {scalar_t__ use_rdp5; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(RDPCLIENT * VAR_6, uint32 VAR_7, BOOL VAR_8, BOOL VAR_9)
{
 uint8 VAR_10;

 if (VAR_9)
  VAR_10 = VAR_4;
 else
  VAR_10 = VAR_5;

 if (VAR_8)
 {
  if (VAR_6->use_rdp5)
  {
   FUNC_0(VAR_6, VAR_7, VAR_0, VAR_10);
  }
  else
  {

   FUNC_0(VAR_6, VAR_7, VAR_0, VAR_3);
   FUNC_0(VAR_6, VAR_7, VAR_0, VAR_2);
  }
 }
 else
 {

  if (VAR_6->use_rdp5)
  {
   FUNC_0(VAR_6, VAR_7, VAR_1, VAR_10);
  }
  else
  {
   FUNC_0(VAR_6, VAR_7, VAR_1, VAR_2);
   FUNC_0(VAR_6, VAR_7, VAR_1, VAR_3);
  }
 }
}
