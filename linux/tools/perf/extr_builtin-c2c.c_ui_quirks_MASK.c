
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_22__ {scalar_t__ width; } ;
struct TYPE_21__ {scalar_t__ width; } ;
struct TYPE_17__ {TYPE_3__* line; } ;
struct TYPE_20__ {int width; TYPE_4__ header; } ;
struct TYPE_19__ {scalar_t__ width; } ;
struct TYPE_18__ {int header; } ;
struct TYPE_16__ {char* text; } ;
struct TYPE_15__ {TYPE_1__* line; } ;
struct TYPE_14__ {char* text; } ;
struct TYPE_13__ {size_t display; int use_stdio; } ;
struct TYPE_12__ {TYPE_2__ header; scalar_t__ width; } ;


 int VAR_0 ;
 TYPE_11__ VAR_1 ;
 TYPE_10__ VAR_2 ;
 TYPE_9__ VAR_3 ;
 TYPE_8__ VAR_4 ;
 TYPE_7__ VAR_5 ;
 TYPE_6__ VAR_6 ;
 TYPE_5__ VAR_7 ;
 char* FUNC_0 (char const*,scalar_t__) ;
 TYPE_4__ VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static int FUNC_1(void)
{
 const char *VAR_10 = "Data address";
 char *VAR_11;

 if (!VAR_1.use_stdio) {
  VAR_5.width = 5;
  VAR_5.header = VAR_8;
  VAR_10 = "CL";
 }

 VAR_7.header = VAR_9[VAR_1.display];


 VAR_11 = FUNC_0("Cacheline", VAR_2.width +
         VAR_4.width +
         VAR_3.width + 4);
 if (!VAR_11)
  return -VAR_0;

 VAR_2.header.line[0].text = VAR_11;


 VAR_11 = FUNC_0(VAR_10, VAR_5.width +
            VAR_6.width +
     VAR_3.width + 4);
 if (!VAR_11)
  return -VAR_0;

 VAR_5.header.line[0].text = VAR_11;

 return 0;
}
