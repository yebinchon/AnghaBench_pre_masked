
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value_32 ;
struct property {int name; } ;
struct node {char* name; struct node* parent; } ;
struct marker {int offset; } ;
struct dt_info {int dummy; } ;
typedef int fdt32_t ;


 int VAR_0 ;
 int FUNC_0 (struct node*,int ,int *,int,int ) ;
 struct node* FUNC_1 (struct node*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char**) ;
 struct node* FUNC_4 (struct node*,char*) ;
 char** FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct dt_info *VAR_1,
  struct node *VAR_2, struct node *VAR_3,
  struct property *VAR_4, struct marker *VAR_5,
  struct node *VAR_6)
{
 struct node *VAR_7, *VAR_8;
 fdt32_t VAR_9;
 char **VAR_10;
 int VAR_11, VAR_12;


 VAR_12 = 0;
 for (VAR_7 = VAR_3; VAR_7; VAR_7 = VAR_7->parent)
  VAR_12++;


 VAR_10 = FUNC_5(sizeof(*VAR_10) * VAR_12);


 for (VAR_7 = VAR_3, VAR_11 = VAR_12 - 1; VAR_7; VAR_7 = VAR_7->parent, VAR_11--)
  VAR_10[VAR_11] = VAR_7->name;


 for (VAR_7 = VAR_2, VAR_11 = 1; VAR_11 < VAR_12; VAR_11++, VAR_7 = VAR_8) {

  VAR_8 = FUNC_4(VAR_7, VAR_10[VAR_11]);
  if (!VAR_8)
   VAR_8 = FUNC_1(VAR_7, VAR_10[VAR_11]);
 }

 FUNC_3(VAR_10);

 VAR_9 = FUNC_2(VAR_5->offset);
 FUNC_0(VAR_7, VAR_4->name, &VAR_9, sizeof(VAR_9), VAR_0);
}
