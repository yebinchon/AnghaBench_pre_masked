
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct packet {int options_valid; TYPE_1__* options; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {unsigned char* data; int len; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char* FUNC_0 (int,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (char*,...) ;

void
FUNC_5(struct packet *VAR_5,
    unsigned char *VAR_6, int VAR_7)
{
 unsigned char *VAR_8, *VAR_9, *VAR_10 = VAR_6 + VAR_7;
 int VAR_11, VAR_12;

 for (VAR_8 = VAR_6; *VAR_8 != VAR_0 && VAR_8 < VAR_10; ) {
  VAR_12 = VAR_8[0];


  if (VAR_12 == VAR_1) {
   VAR_8++;
   continue;
  }
  if (VAR_8 + 2 > VAR_10) {
   VAR_11 = 65536;
   goto bogus;
  }





  VAR_11 = VAR_8[1];
  if (VAR_8 + VAR_11 + 2 > VAR_10) {
      bogus:
   VAR_2++;
   FUNC_4("option %s (%d) %s.",
       VAR_4[VAR_12].name, VAR_11,
       "larger than buffer");
   if (VAR_2 == VAR_3) {
    VAR_5->options_valid = 1;
    VAR_2 = 0;
    FUNC_4("Many bogus options seen in offers. "
        "Taking this offer in spite of bogus "
        "options - hope for the best!");
   } else {
    FUNC_4("rejecting bogus offer.");
    VAR_5->options_valid = 0;
   }
   return;
  }




  if (!VAR_5->options[VAR_12].data) {
   if (!(VAR_9 = FUNC_0(1, VAR_11 + 1)))
    FUNC_1("Can't allocate storage for option %s.",
        VAR_4[VAR_12].name);




   FUNC_3(VAR_9, &VAR_8[2], VAR_11);
   VAR_9[VAR_11] = 0;
   VAR_5->options[VAR_12].len = VAR_11;
   VAR_5->options[VAR_12].data = VAR_9;
  } else {





   VAR_9 = FUNC_0(1, VAR_11 + VAR_5->options[VAR_12].len + 1);
   if (!VAR_9) {
    FUNC_1("Can't expand storage for option %s.",
        VAR_4[VAR_12].name);
                                return;
                        }
   FUNC_3(VAR_9, VAR_5->options[VAR_12].data,
    VAR_5->options[VAR_12].len);
   FUNC_3(VAR_9 + VAR_5->options[VAR_12].len,
    &VAR_8[2], VAR_11);
   VAR_5->options[VAR_12].len += VAR_11;
   VAR_9[VAR_5->options[VAR_12].len] = 0;
   FUNC_2(VAR_5->options[VAR_12].data);
   VAR_5->options[VAR_12].data = VAR_9;
  }
  VAR_8 += VAR_11 + 2;
 }
 VAR_5->options_valid = 1;
}
