
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msghdr {TYPE_1__* msg_iov; } ;
struct TYPE_4__ {scalar_t__ ss_family; } ;
struct TYPE_3__ {int iov_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,struct msghdr*,int,int ) ;
 int FUNC_1 (int,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(int VAR_10, struct msghdr *VAR_11)
{
 bool VAR_12 = VAR_9;
 int VAR_13, VAR_14, VAR_15;


 VAR_14 = VAR_8 / VAR_5;
 VAR_15 = VAR_8 - (VAR_5 * VAR_14);

 FUNC_1(VAR_10, VAR_1, VAR_4, 1);

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {




  if (VAR_6)
   VAR_12 = (VAR_13 & 1);

  VAR_11->msg_iov[0].iov_len = VAR_14 + VAR_15;
  VAR_15 = 0;

  FUNC_0(VAR_10, VAR_11, VAR_12,
      (VAR_7.ss_family == VAR_0 ?
       VAR_2 : VAR_3));
 }

 FUNC_1(VAR_10, VAR_1, VAR_4, 0);
}
