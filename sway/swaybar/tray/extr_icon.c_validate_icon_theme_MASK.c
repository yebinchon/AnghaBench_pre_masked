
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icon_theme {scalar_t__ directories; scalar_t__ comment; scalar_t__ name; } ;



__attribute__((used)) static bool FUNC_0(struct icon_theme *VAR_0) {
 return VAR_0 && VAR_0->name && VAR_0->comment && VAR_0->directories;
}
