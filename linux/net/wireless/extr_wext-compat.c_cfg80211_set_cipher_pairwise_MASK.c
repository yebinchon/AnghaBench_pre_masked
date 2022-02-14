
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int* ciphers_pairwise; int n_ciphers_pairwise; } ;
struct TYPE_4__ {TYPE_3__ crypto; } ;
struct TYPE_5__ {TYPE_1__ connect; } ;
struct wireless_dev {TYPE_2__ wext; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_1(struct wireless_dev *VAR_11, u32 VAR_12)
{
 int VAR_13 = 0;
 u32 *VAR_14 = VAR_11->wext.connect.crypto.ciphers_pairwise;

 if (VAR_12 & VAR_4) {
  VAR_14[VAR_13] = VAR_10;
  VAR_13++;
 }

 if (VAR_12 & VAR_3) {
  VAR_14[VAR_13] = VAR_9;
  VAR_13++;
 }

 if (VAR_12 & VAR_2) {
  VAR_14[VAR_13] = VAR_8;
  VAR_13++;
 }

 if (VAR_12 & VAR_1) {
  VAR_14[VAR_13] = VAR_7;
  VAR_13++;
 }

 if (VAR_12 & VAR_0) {
  VAR_14[VAR_13] = VAR_6;
  VAR_13++;
 }

 FUNC_0(VAR_5 < 5);

 VAR_11->wext.connect.crypto.n_ciphers_pairwise = VAR_13;

 return 0;
}
